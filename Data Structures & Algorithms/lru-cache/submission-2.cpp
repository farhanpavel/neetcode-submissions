struct Node {
    int key;
    int data;
    Node* next;
    Node* prev;
};

class LRUCache {
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    map<int, Node*> mp;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (!mp.count(key)) return -1;
        Node* node = mp[key];
        if (node != head) {
            // detach node
            if (node->prev) node->prev->next = node->next;
            if (node->next) node->next->prev = node->prev;
            if (node == tail) tail = node->prev;

            // move to head
            node->prev = nullptr;
            node->next = head;
            if (head) head->prev = node;
            head = node;
        }
        return node->data;
    }

    void put(int key, int value) {
        if (mp.count(key)) {
            Node* node = mp[key];
            node->data = value;

            if (node != head) {
                // detach node
                if (node->prev) node->prev->next = node->next;
                if (node->next) node->next->prev = node->prev;
                if (node == tail) tail = node->prev;

                // move to head
                node->prev = nullptr;
                node->next = head;
                if (head) head->prev = node;
                head = node;
            }
        } else {
            Node* node = new Node();
            node->key = key;
            node->data = value;
            node->prev = nullptr;
            node->next = head;
            if (head) head->prev = node;
            head = node;
            if (!tail) tail = node;

            mp[key] = node;

            if (mp.size() > cap) {
                Node* tempy = tail;
                mp.erase(tail->key);
                tail = tail->prev;
                if (tail) tail->next = nullptr;
                else head = nullptr; // cache becomes empty
                delete tempy;
            }
        }
    }
};
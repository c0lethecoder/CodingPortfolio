#ifndef BOX_H
#define BOX_H

// Your code in this sturct


struct Box{
    int* id;

    int capacity;
    int* contents;

    Box(){
        id = new int(1);
        capacity = 5;
        contents = new int[capacity];
        for (int i = 0; i < capacity; i++){
            contents[i] = -1;
        }
    }


    Box(int x){
        id = new int(x);
        capacity = 5;
        contents = new int[capacity];
        for (int i = 0; i < capacity; i++){
            contents[i] = -1;
        }
    }

    Box(const Box& other){
        id = new int(*other.id);
        capacity = other.capacity;
        contents = new int[capacity];
        for (int i = 0; i < capacity; i++){
            contents[i] = other.contents[i];
        }
    }

    Box operator=(const Box& other){
        id = new int(*other.id);
        capacity = other.capacity;
        contents = new int[capacity];
        for (int i = 0; i < capacity; i++){
            contents[i] = other.contents[i];
        }
    }


    void put(int pos, int item){
        contents[pos] = item;
    }

    int take(int pos){
        return contents[pos];
    }
};

#endif

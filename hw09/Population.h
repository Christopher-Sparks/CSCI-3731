#ifndef POPULATION_H
#define POPULATION_H

class Fish;

class Population{
    private:
        int num_fishes;
        Fish** fishes;

    public:
        Population();
        virtual ~Population();

        void add(Fish* f);
        void remove(int index);
        int size() const;
        Fish* get_fish(int index) const;
        int get_index(Fish* f) const;
};

#endif
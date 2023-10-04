
#include <iostream>
#include <vector>
#include <algorithm>

// Record struct
struct Record {
    std::string name;
    int id;
};

// SortStrategy abstract class
class SortStrategy {
public:
    virtual void Sort(std::vector<Record>& records) = 0;
};

// InsertionSort class
class InsertionSort : public SortStrategy {
public:
    void Sort(std::vector<Record>& records) override {
        for (int i = 1; i < records.size(); i++) {
            Record key = records[i];
            int j = i - 1;
            
            while (j >= 0 && Compare(records[j], key)) {
                records[j + 1] = records[j];
                j--;
            }
            
            records[j + 1] = key;
        }
    }
    
private:
    bool Compare(const Record& a, const Record& b) {
        // CompareByName criteria
        return a.name < b.name;
    }
};

// SelectionSort class
class SelectionSort : public SortStrategy {
public:
    void Sort(std::vector<Record>& records) override {
        for (int i = 0; i < records.size() - 1; i++) {
            int minIndex = i;
            
            for (int j = i + 1; j < records.size(); j++) {
                if (Compare(records[j], records[minIndex])) {
                    minIndex = j;
                }
            }
            
            std::swap(records[i], records[minIndex]);
        }
    }
    
private:
    bool Compare(const Record& a, const Record& b) {
        // CompareById criteria
        return a.id < b.id;
    }
};

int main() {
    std::vector<Record> records = {
        {"John", 3},
        {"Alice", 1},
        {"Bob", 2},
        {"Emma", 4}
    };
    
    SortStrategy* strategy = new InsertionSort();
    strategy->Sort(records);
    
    std::cout << "Sorted by name using Insertion Sort:\n";
    for (const auto& record : records) {
        std::cout << record.name << " - " << record.id << "\n";
    }
    
    delete strategy;
    
    strategy = new SelectionSort();
    strategy->Sort(records);
    
    std::cout << "\nSorted by id using Selection Sort:\n";
    for (const auto& record : records) {
        std::cout << record.name << " - " << record.id << "\n";
    }
    
    delete strategy;
    
    return 0;
}
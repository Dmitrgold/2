#include <vector>
using namespace std;
vector<int> incrementVector(const vector<int>& vec, int n) {
    vector<int> result = vec;
    for (int& val : result) {
        val += n;
    }
    return result;
}
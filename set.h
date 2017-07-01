#include <algorithm>
using T = double;
class Set {
public:
  void insert(const T& element);
  void erase(const T& element);
  void clear();
  int count(const T& element) const;
  bool empty();
  size_t size();
private:
  // TODO
};

// TODO

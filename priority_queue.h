#include <algorithm>
using T = double;
class Priority_queue {
public:
  bool empty() const;
  size_t size() const;
  const T& top() const;
  void push(const T& val);
  const T& pop();
private:
  // TODO
};

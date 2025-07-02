#include <string>

using std::string;

class LengthChecker {
 public:
  int getLengthScore(const string& wordA, const string& wordB) {
    if (wordA.size() == wordB.size()) {
      return 60;
    }
  }
};
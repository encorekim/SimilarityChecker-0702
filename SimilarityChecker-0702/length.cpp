#include <string>

using std::string;

class LengthChecker {
 public:
  double getLengthScore(const string& wordA, const string& wordB) {
    if (wordA.size() == wordB.size()) {
      return 60;
    }
    if (wordA.size() >= 2 * wordB.size() || wordB.size() >= 2 * wordA.size()) {
      return 0;
    }
    int gap = wordA.size() - wordB.size();
    if (gap < 0) {
      gap *= -1;
    }
    int shorter = 0;
    if (wordA.size() > wordB.size()) {
      shorter = wordB.size();
    } else {
      shorter = wordA.size();
    }
    return (1 - ((double)gap / (double)shorter)) * 60;
  }
};
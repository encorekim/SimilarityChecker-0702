#include <stdexcept>
#include <string>

using std::string;

class AlphabetChecker {
 public:
  double getAlphabetScore(const string& wordA, const string& wordB) {
    if (wordA.size() == 0 && wordB.size() == 0) {
      throw(std::invalid_argument("Invalid arguments: all zero-length strings"));
    }

    if (wordA.size() == 0 || wordB.size() == 0) {
      return 0;
    }
  }

  private:
  double MAX_SCORE = 40;
};
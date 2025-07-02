#include <string>

using std::string;

class LengthChecker {
 public:
  double getLengthScore(const string& wordA, const string& wordB) {
    bool retFlag;
    if (isDoubleLength(wordA, wordB)) {
      return 0;
    }
    return calculateLengthScore(wordA, wordB);
  }

 private:
  bool isDoubleLength(const std::string& wordA, const std::string& wordB) {
    if (wordA.size() >= 2 * wordB.size() || wordB.size() >= 2 * wordA.size()) {
      return true;
    }
    return false;
  }

  int calculateGap(const std::string& wordA, const std::string& wordB) {
    int result = wordA.size() - wordB.size();
    if (result < 0) {
      result *= -1;
    }
    return result;
  }

  int calculageShorter(const std::string& wordA, const std::string& wordB) {
    if (wordA.size() > wordB.size()) {
      return wordB.size();
    }
    return wordA.size();
  }

  double calculateLengthScore(const std::string& wordA,
                              const std::string& wordB) {
    int gap = calculateGap(wordA, wordB);
    int shorter = calculageShorter(wordA, wordB);
    return (1 - ((double)gap / (double)shorter)) * 60;
  }
};
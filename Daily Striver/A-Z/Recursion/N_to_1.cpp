class Solution {
  public:
  void printNos(int N){
      printNumbers(1, N);
  }

  private:
    void printNumbers(int i, int n){
        if (i>n) return;
        printNumbers(i+1, n);
        cout << i << " ";
    }
};

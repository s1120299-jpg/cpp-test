 #include <iostream>
 int main() {
   int a = 0, b = 0;                    // 先給初值，習慣好一點
   std::cout << "Enter two integers: "; // 提示使用者
   std::cin >> a >> b;                  // 從鍵盤依序讀兩個整數
   std::cout << "a+b=" << (a + b) << "\n";
   return 0;

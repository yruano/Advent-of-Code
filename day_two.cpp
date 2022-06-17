#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>


// int main() {
//     std::ifstream infile("day_two_input.txt");
//     std::string line;

//     int count = 0;
//     int add = 0;

//     while (std::getline(infile, line)) {
//         std::replace(line.begin(), line.end(), 'x', ' ');
//         std::istringstream ss(line);
//         int l, w, h;
//         int a1, a2, a3;
//         if (ss >> l >> w >> h) {
//             a1 = (l * w);
//             a2 = (w * h);
//             a3 = (h * l);
//             count += 2 * (a1 + a2 + a3);

//             if (a1 <= a2 && a1 <= a3) {
//                 count += a1;
//             } else if (a2 <= a1 && a2 <= a3) {
//                 count += a2;
//             } else if (a3 <= a1 && a3 <= a2) {
//                 count += a3;
//             }
//         }

//     }

//     std::cout << count << std::endl;

// }

int main() {
    std::ifstream infile("day_two_input.txt");
    std::string line;

    int count = 0;
    int add = 0;

    while (std::getline(infile, line)) {
        std::replace(line.begin(), line.end(), 'x', ' ');
        std::istringstream ss(line);
        int l, w, h;
        int a1, a2, a3;
        if (ss >> l >> w >> h) {
            a1 = (l + w);
            a2 = (w + h);
            a3 = (h + l);
            count += l * w * h;

            if (a1 <= a2 && a1 <= a3) {
                count += 2 * a1;
            } else if (a2 <= a1 && a2 <= a3) {
                count += 2 * a2;
            } else if (a3 <= a1 && a3 <= a2) {
                count += 2 * a3;
            }
        }
    }

    std::cout << count << std::endl;

}
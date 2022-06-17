#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <set>


// int main() {
//     std::ifstream file("day_tree_input.txt");
//     std::set<std::pair<int, int>> xy;
//     int x = 0;
//     int y = 0;
//     xy.insert(std::make_pair(x, y));
//     int count = 1;
    
//     while (!file.eof()) {
//         char direction = file.get();
//         if (direction == '^') {
//             y += 1;
//             if (xy.find(std::make_pair(x, y)) == xy.end()) {
//                 xy.insert(std::make_pair(x, y));
//                 count += 1;
//             }
//         } else if (direction == 'v') {
//             y -= 1;
//             if (xy.find(std::make_pair(x, y)) == xy.end()) {
//                 xy.insert(std::make_pair(x, y));
//                 count += 1;
//             }
//         } else if (direction == '>') {
//             x += 1;
//             if (xy.find(std::make_pair(x, y)) == xy.end()) {
//                 xy.insert(std::make_pair(x, y));
//                 count += 1;
//             }
//         } else if (direction == '<') {
//             x -= 1;
//             if (xy.find(std::make_pair(x, y)) == xy.end()) {
//                 xy.insert(std::make_pair(x, y));
//                 count += 1;
//             }
//         }
//     }
//     std::cout << count << std::endl;
// }


int main() {
    std::ifstream file("day_tree_input.txt");
    std::set<std::pair<int, int>> xy;
    std::set<std::pair<int, int>> xy_bot;
    int x = 0;
    int y = 0;
    int x_bot = 0;
    int y_bot = 0;
    xy.insert(std::make_pair(x, y));
    xy_bot.insert(std::make_pair(x_bot, y_bot));
    int count = 1;
    int set_count = 0;
    
    while (!file.eof()) {
        char direction = file.get();
        if (set_count == 0) {
            if (direction == '^') {
                y += 1;
                if (xy.find(std::make_pair(x, y)) == xy.end() && xy_bot.find(std::make_pair(x, y)) == xy_bot.end()) {
                    xy.insert(std::make_pair(x, y));
                    count += 1;
                }
            } else if (direction == 'v') {
                y -= 1;
                if (xy.find(std::make_pair(x, y)) == xy.end() && xy_bot.find(std::make_pair(x, y)) == xy_bot.end()) {
                    xy.insert(std::make_pair(x, y));
                    count += 1;
                }
            } else if (direction == '>') {
                x += 1;
                if (xy.find(std::make_pair(x, y)) == xy.end() && xy_bot.find(std::make_pair(x, y)) == xy_bot.end()) {
                    xy.insert(std::make_pair(x, y));
                    count += 1;
                }
            } else if (direction == '<') {
                x -= 1;
                if (xy.find(std::make_pair(x, y)) == xy.end() && xy_bot.find(std::make_pair(x, y)) == xy_bot.end()) {
                    xy.insert(std::make_pair(x, y));
                    count += 1;
                }
            }
        } else if (set_count == 1) {
            if (direction == '^') {
                y_bot += 1;
                if (xy_bot.find(std::make_pair(x_bot, y_bot)) == xy_bot.end() && xy.find(std::make_pair(x_bot, y_bot)) == xy.end()) {
                    xy_bot.insert(std::make_pair(x_bot, y_bot));
                    count += 1;
                }
            } else if (direction == 'v') {
                y_bot -= 1;
                if (xy_bot.find(std::make_pair(x_bot, y_bot)) == xy_bot.end() && xy.find(std::make_pair(x_bot, y_bot)) == xy.end()) {
                    xy_bot.insert(std::make_pair(x_bot, y_bot));
                    count += 1;
                }
            } else if (direction == '>') {
                x_bot += 1;
                if (xy_bot.find(std::make_pair(x_bot, y_bot)) == xy_bot.end() && xy.find(std::make_pair(x_bot, y_bot)) == xy.end()) {
                    xy_bot.insert(std::make_pair(x_bot, y_bot));
                    count += 1;
                }
            } else if (direction == '<') {
                x_bot -= 1;
                if (xy_bot.find(std::make_pair(x_bot, y_bot)) == xy_bot.end() && xy.find(std::make_pair(x_bot, y_bot)) == xy.end()) {
                    xy_bot.insert(std::make_pair(x_bot, y_bot));
                    count += 1;
                }
            }
        }
        if (set_count == 1) {
            set_count = 0;
        } else {
            set_count += 1;
        }
    }
    std::cout << count << std::endl;
}
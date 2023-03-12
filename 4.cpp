#include <iostream>
#include <stack>



int main() {

    struct Node
    {
        int n, h;
        Node(int x, int h) : n(x), h(h) {}
    };

    std::stack<Node> s;

    int h, n;
    long res = 0;
    std::cin >> n;
    s.push(Node(0, 0));

    for (int i = 1; i <= n + 1; i++) {
        if (i <= n) {
            std::cin >> h;
        } else {
            h = 0;
        }
        int x = i;
        while (h < s.top().h) {
            x = s.top().n;
            int Height = s.top().h;
            s.pop();
            long area = 1L * Height * (i - x);
            if (area > res) {
                res = area;
            }
        }
        if (h > s.top().h) {
            s.push(Node(x, h));
        }
    }

    std::cout << std::endl;
    std::cout << res;

    return 0;
}
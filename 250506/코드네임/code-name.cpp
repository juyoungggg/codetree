#include <iostream>
using namespace std;

class Agent {
public:
    char code;
    int score;
    Agent();
    Agent(char code, int score);
};

Agent::Agent() { }

Agent::Agent(char code, int score) {
    this->code = code;
    this->score = score;
}

int main() {
    Agent agents[5];
    char code;
    int score;

    int minidx = 0;
    for (int i = 0; i < 5; i++) {
        cin >> code;
        cin >> score;
        agents[i] = Agent(code, score);

        if (agents[minidx].score > agents[i].score)
            minidx = i;
    }

    cout << agents[minidx].code << ' ' << agents[minidx].score << endl;
    return 0;
}
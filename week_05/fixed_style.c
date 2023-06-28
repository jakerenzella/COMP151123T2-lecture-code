struct pokemon {
    int hp;
    double attack_score;
};

int battle(struct pokemon x, struct pokemon y) {
    if((x.hp - y.attack_score) > (y.hp - x.attack_score)) {
    return 0;
    } else if ((y.hp - x.attack_score) > (x.hp - y.attack_score)) {
        return 1;
    } else {
        return -1;
    }
}

int main(void) {
    struct pokemon x;
    struct pokemon y;
    x.hp = 50;
    x.attack_score = 5.0;
    
    y.hp = 45;
    y.attack_score = 2.5;

    calculate_result(x, y);
}
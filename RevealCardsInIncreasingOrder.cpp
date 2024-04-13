class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> order;
        vector<int> newDeck(deck.size());
        sort(deck.begin(), deck.end());
        for(int i = 0; i < deck.size(); i++) order.push(i);

        int idx = 0;
        while(!order.empty()){
            newDeck[order.front()] = deck[idx++];
            order.pop();
            order.push(order.front());
            order.pop();
        }

        return newDeck;
    }
};

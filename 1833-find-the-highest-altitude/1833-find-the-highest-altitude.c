int largestAltitude(int* gain, int gainSize) {
    int netGain = 0;
    int highestPoint = 0;
    for (int i = 0; i < gainSize; i++){
        netGain += gain[i];
        if (highestPoint < netGain){
            highestPoint = netGain;
        }
    }
    return highestPoint;
}
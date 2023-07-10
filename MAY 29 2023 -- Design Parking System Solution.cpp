class ParkingSystem {
    vector<int> arr;
public:
    ParkingSystem(int big, int medium, int small) {
        arr = {big,medium,small};
    }
    
    bool addCar(int carType) {
        if(arr[carType - 1]){
            arr[carType - 1]--;
            return true;
        }
        else return false;
    }
};

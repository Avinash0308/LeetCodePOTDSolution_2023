class UndergroundSystem {
    int pas_id;
    string stn_name;
    double check_in_time;
    map<int,pair<string,double>> m;
    map<pair<string,string>,pair<double,int>> n;
public:
    UndergroundSystem() {
    }
    
    void checkIn(int id, string stationName, int t) {
        pas_id = id;
        stn_name = stationName;
        check_in_time = double(t);
        m[pas_id] = {stn_name,check_in_time};
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string,double> p = m[id];
        vector<string> v;
        v.push_back(p.first);
        v.push_back(stationName);
        if(n.find({v[0],v[1]}) != n.end()){
            double initial_time = n[{v[0],v[1]}].first;
            n[{v[0],v[1]}].second++;
            n[{v[0],v[1]}].first = (initial_time+abs(t-p.second));
        }
        else{
            n[{v[0],v[1]}].first = double(abs(t-p.second));
            n[{v[0],v[1]}].second = 1;
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        vector<string> v = {startStation,endStation};
        return n[{v[0],v[1]}].first/n[{v[0],v[1]}].second;
    }
};

//
//  main.cpp
//  time operator overloading
//
//  Created by Agnik Saha on 10/20/19.
//  Copyright © 2019 Agnik Saha. All rights reserved.
//
#include <iostream>

using namespace std;

class RealTime{
    
    private:
    int sec,min,hour;
    
    public:
    
        RealTime(){
            sec = 0;
            min = 0;
            hour = 0;
        };
    
        RealTime(int h,int m,int s){
            
            sec = s;
            min = m;
            hour = h;
        
        }
    
    RealTime operator + (RealTime that)
    {
        RealTime result;
        result.sec= this->sec + that.sec;
        result.min= this->min + that.min;
        result.hour= this->hour + that.hour;
        //cout << result.sec << endl;
        if(result.sec>=60){
            result.min+= 1;
            result.sec -= 60;
            if(result.min>=60){
                result.hour += 1;
                result.min -= 60;
            }
        }
        
        if(result.min>=60){
            result.min -= 60;
            result.hour += 1;
            
        }
        
        return result;
    }
        
    RealTime operator = ( RealTime that){
    
        RealTime result;
        result.sec = that.sec;
        result.min = that.min;
        result.hour = that.hour;
        
        return result;
    
    }
        
    RealTime operator ++ (){
    
        ++(this->sec);
        //cout << this->sec << endl;
        if(this->sec>=60){
            this->sec -= 60;
            //cout << this->sec << endl;
            this->min+=1;
            //cout << this->min << endl;
            if(this->min>=60){
                this->hour += 1;
                this->min -= 60;
            }
        }
        
        if(this->min>=60){
            this->min -= 60;
            this->hour += 1;
            
        }
        return RealTime(*this);
    
    }
    
    RealTime operator ++ (int){
    
        RealTime old(*this);
        (this->sec)++;
        if(this->sec>=60){
            this->sec = 0;
            //cout << this->sec << endl;
            this->min+=1;
            //cout << this->min << endl;
            if(this->min>=60){
                this->hour += 1;
                this->min -= 60;
            }
        }
        
        if(this->min>=60){
            this->min -= 60;
            this->hour += 1;
            
        }
        return old;
    
    }
        
    string print(){
        
        string s;
        s.append(to_string(hour));
        s.append(":");
        s.append(to_string(min));
        s.append(":");
        s.append(to_string(sec));
    
    return s;
    
    }
};





int main(){

    RealTime time1(1,20,50);
    
    //cout << time1.print() << endl;
    
    RealTime time2(2,30,10);
    
    cout << "Time 1 : " << time1.print() << endl;
    cout << "Time 2 : " << time2.print() << endl;
    
    RealTime time4 = time1+time2;
    //time4 = time1 + time2;
    //time3 = time1 + time2;
    
    cout << "Addition " << time4.print() << endl;
    //cout << "Time 1 : " << time1.print() << endl;
    //RealTime time3 = time1++;
    
    RealTime time5(2,45,59);
    RealTime time6(3,2,59);
    
    cout << "Time : " << time5.print() << endl;
    
    RealTime time7 = ++time5;
    
    cout << "Post Increment old : " << time5.print() << endl;
    cout << "Post Increment new : " << time7.print() << endl;
    
    cout << "Time : " << time6.print() << endl;
    RealTime time8 = time6++;
    
    cout << "Pre Increment old : " << time6.print() << endl;
    cout << "Pre Increment new : " <<     time8.print() << endl;
    
    return 0;

}

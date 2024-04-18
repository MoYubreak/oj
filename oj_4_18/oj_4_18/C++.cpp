
//https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1?tpId=13&tqId=11200&tPage=3&rp=3&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//#include <cstdio>
//#include <linux/limits.h>
//
//class Solution {
//public:
//    class A
//    {
//    public:
//        A()
//        {
//            _n += _a;
//            _a++;
//        }
//        static int GetInt()
//        {
//            return _n;
//        }
//    private:
//        static int _a;
//        static int _n;
//    };
//public:
//    int Sum_Solution(int n) {
//        A a[n];
//        return A::GetInt();
//    }
//};
//
//int Solution::A::_a = 1;
//int Solution::A::_n = 0;


//https://www.nowcoder.com/practice/769d45d455fe40b385ba32f97e7bcded?tpId=37&&tqId=21296&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking
//#include <climits>
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//    Date()
//    {}
//    Date(const Date& d)
//    {
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//    Date(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    int GetMonthDay(int year, int month)
//    {
//        const int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        if (month == 2 && ((year % 4 == 0 & year % 100 != 0) || (year % 400 == 0)))
//        {
//            return 29;
//        }
//        else
//            return arr[month];
//    }
//
//    bool operator<(const Date& date)
//    {
//        if (_year < date._year)
//        {
//            return true;
//        }
//        else if (_year == date._year)
//        {
//            if (_month < date._month)
//            {
//                return true;
//            }
//            else if (_month == date._month)
//            {
//                if (_day < date._day)
//                {
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//
//    Date& operator+=(int day)
//    {
//        _day += day;
//        while (_day > GetMonthDay(_year, _month))
//        {
//            _day -= GetMonthDay(_year, _month);
//
//            _month++;
//            if (_month == 13)
//            {
//                _month = 1;
//                _year++;
//            }
//        }
//        return *this;
//    }
//    int operator-=(const Date& date)
//    {
//        int n = 0;
//        Date min = date;
//        Date max = *this;
//        while (min < max)
//        {
//            min += 1;
//            n++;
//        }
//        return n;
//    }
//private:
//    int _year = 0;
//    int _month = 0;
//    int _day = 0;
//
//};
//
//int main() {
//    int _year, _month, _day;
//    cin >> _year >> _month >> _day;
//
//    Date d1(_year, _month, _day);
//    Date d2(_year, 0, 0);
//
//    int day = (d1 -= d2);
//    cout << day << endl;
//    return 0;
//}
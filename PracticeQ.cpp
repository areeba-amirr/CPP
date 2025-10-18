//A Transport Management System handles different vehicles: Car, Bike, and Bus. Each vehicle has a start() function that behaves differently.
/*#include<iostream>
using namespace std;
class Vehicle{
	public :
		virtual void start(){
			cout<<"Vehicle Starts.."<<endl;
		}
};
class Bus : public Vehicle{
	public :
		void start() override{
		cout<<"Bus Starts.."<<endl;
		}
};
class Bike : public Vehicle{
	public :
		void start() override{
		cout<<"Bike Starts.."<<endl;
		}
};
class Car : public Vehicle{
	public :
		void start() override{
		cout<<"Car Starts.."<<endl;
		}
};
int main(){
	Vehicle *v;
	Bus b1;
	Car c1;
	Bike bi1;
	

	v = &b1;
	v->start();	
	v = &c1;
	v->start();	
	v = &bi1;
	v->start();	
	return 0;
}*/
//You are building a Media Player that can play Audio, Video, and Podcast files. Each has the same function name play(), but the behavior is different.
#include<iostream>
using namespace std;
class MediaPlayer{
	public :
		virtual void play(){
			cout<<"Playing.."<<endl;
		}
};
class Video : public MediaPlayer{
	public :
		void play() override{
		cout<<"Playing Video.."<<endl;
		}
};
class Audio : public MediaPlayer{
	public :
		void play() override{
		cout<<"Playing Audio.."<<endl;
		}
};
class Podcast : public MediaPlayer{
	public :
		void play() override{
		cout<<"Playing Podcastfiles.."<<endl;
		}
};
int main(){
	MediaPlayer* mp;
	Video v1;
	Audio a1;
	Podcast pf1;

	mp = &v1;
	mp->play();
	mp = &a1;
	mp->play();
	mp = &pf1;
	mp->play();
	return 0;
}

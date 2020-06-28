#include <iostream>
//#include "BNO055.h"    //include BNO library for pitch,roll,yaw.
//#include "GPS.h"       //include GPS library for Longtitude, Lattitude, Altitude.
//#include "BME280.h"    //include using BME280 sensor library for heigth, also it can take velocity(may take the BNO255 library). 
class ModelUydu{   //Use the instance Gazi from ModleUydu class, like (ModelUdu Gazi;)
private:
	uint8_t Status;
	uint16_t Paket_No;
	uint8_t Donus_Sayisi;
	float Pitch;
	float Roll;
	float Yaw;
	double Gps_Lat;
	double Gps_Long;
	double Gps_Alt;
	uint8_t Donus_Sayisi;
	float Yukseklik;
	bool Video_Aktarim_Bilgisi;
	String Telemetri_Data;
	bool ayrilma = false;
	//BNO055 bno; //Create a instance from BNO055 libary to take position data
	//BME280 x ; //Create a instance for heigth.
	//Gps gps;    //Create a instance for position data.(Roll,Pitch,Yaw)
public:
	static int Takim_No;
	ModelUydu(){};
	ModelUydu(int);
	void get_Position();		     //Telemtry data include position data to understand what is the satellite position and velocity.  
	void get_Gonderim_Saati();       //Telemtry data must include the clock data when in the satellite Xbee sensor send the data in the Ground station Xbee sensor.  
	void get_Paket_No();             //Increase Paket_No when take an each the telemtry data
	void get_Gps_Data();		     //To understand where the satellite location.
	void get_Pil_Gerilim();			 //
	void get_Telemetri();            //All telemetry data have to write in this class.
	void set_Servo_Position();       //Adjust the servo motors because servo motor must look up the earth.
	void record_Telemetri_Sd_Kart(); //All telemetry data have to record the sd card. 
	void get_Yukseklik();            //
	uint8_t get_Donus_Sayisi();      //
};

class MotorDriver: public ModelUydu
{
	//Coming soon, will come Pıd software 
};
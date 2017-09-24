/*
 * User.cpp
 *
 *  Created on: Sep 4, 2017
 *      Author: idan
 */

#include "User.h"

User::User() {
	name = "";
	pass = "";
	score = 0;
	loggedIn = false;
	connected = false;
	onGame = false;
	tcp = NULL;
	udp = NULL;
}
User::User(string name, string pass){
	this->name = name;
	this->pass = pass;
	score = 0;
	loggedIn = false;
	connected = false;
	onGame = false;
	tcp = NULL;
	udp = NULL;
}

User::User(string name, string pass, int score){
	this->name = name;
	this->pass = pass;
	this->score = score;
	loggedIn = false;
	connected = false;
	onGame = false;
	tcp = NULL;
	udp = NULL;
}


User::~User() {
	// TODO Auto-generated destructor stub
}

bool User::login() {
}

bool User::openMatch(string name) {
}

bool User::openMatch() {
}

void User::run() {
}

bool User::isConnected() const {
	return connected;
}

void User::setConnected(bool connected) {
	this->connected = connected;
}

bool User::isLoggedIn() const {
	return loggedIn;
}

void User::setLoggedIn(bool loggedIn) {
	this->loggedIn = loggedIn;
}

const string& User::getName() {
	return name;
}

void User::setName(const string& name) {
	this->name = name;
}

bool User::isOnGame() const {
	return onGame;
}

void User::setOnGame(bool onGame) {
	this->onGame = onGame;
}

const string& User::getPass() const {
	return pass;
}

void User::setPass(const string& pass) {
	this->pass = pass;
}

int User::getScore() const {
	return score;
}

void User::setScore(int score) {
	this->score = score;
}

TCPSocket* User::getTcp(){
	return tcp;
}

void User::setTcp(TCPSocket* tcp) {
	this->tcp = tcp;
}

UDPSocket* User::getUdp() {
	return udp;
}

void User::setUdp(UDPSocket* udp) {
	this->udp = udp;
}
#include<stdio.h>
#include <stdlib.h>
//shows the pokemon that can be slected
void pokemon()
{
printf("********** POKEMON 1V1 BATTLE SIMULATOR********** \n");
printf("\n");
printf("Choose Your Pokemon: \n");
printf("1 - Entei \n");
printf("2 - Milotic \n");
printf("3 - Tortera \n");
printf("4 - Pikachu \n");
printf("5 - Groudon \n");
printf("6 - Lapras \n");
printf("7 - Stunfish \n");
printf("\n");
}
//prints line separation
void mark()
{
printf("************************************************* \n");
}
//pokemon hp 
void hpbars(int Np1, int *Nplayer)
{
if(Np1 == 1)
{
printf("Entei: %d/150 HP \n", *Nplayer);
}
else if(Np1 == 2)
{
printf("Milotic: %d/200 HP \n", *Nplayer);
}
else if(Np1 == 3)
{
printf("Tortera: %d/220 HP \n", *Nplayer);
}
else if(Np1 == 4)
{
printf("Pikachu: %d/120 HP \n", *Nplayer);
}
else if(Np1 == 5)
{
printf("Groudon: %d/150 HP \n", *Nplayer);
}
else if(Np1 == 6)
{
printf("Lapras: %d/190 HP \n", *Nplayer);
}
else if (Np1 == 7)
{
printf("Stunfish: %d/130 HP \n", *Nplayer);
}
}
//pokemon move select
void moves(int Np1, int *attack, int *attack2, int *nbp, int *nbp2, int *npp, int 
*npp2 )
{
if(Np1 == 1)
{
printf("1 - Fire Blast (%d BP, %dPP)\n", *attack, *nbp);
printf("2 - Earthquake (%d BP, %dPP) \n", *attack2, *nbp2);
printf("3 - Protect(%dPP) \n", *npp);
printf("4 - Charge Up (%dPP) \n", *npp2);
}
else if(Np1 == 2)
{
printf("1 - Scald (%d BP, %dPP)\n", *attack, *nbp);
printf("2 - Ice Beam (%d BP, %dPP) \n", *attack2, *nbp2);
printf("3 - Protect (%dPP)\n", *npp);
printf("4 - Charge Up (%dPP) \n", *npp2);
}
else if(Np1 == 3)
{
printf("1 - Dig (%d BP, %dPP) \n", *attack, *nbp);
printf("2 - Leaf Storm (%d BP, %dPP) \n", *attack2, *nbp2);
printf("3 - Protect (%dPP) \n", *npp);
printf("4 - Charge Up (%dPP) \n", *npp2);
}
else if(Np1 == 4)
{
printf("1 - Thunderbolt (%d BP, %dPP) \n ", *attack, *nbp);
printf("2 - Dig (%d BP, %dPP) \n", *attack2, *nbp2);
printf("3 - Protect (%dPP) \n", *npp);
printf("4 - Charge Up (%dPP) \n", *npp2);
}
else if(Np1 == 5)
{
printf("1 - Fissure (%d BP, %dPP) \n", *attack, *nbp);
printf("2 - Fire Blast (%d BP, %dPP) \n", *attack2, *nbp2);
printf("3 - Protect (%dPP) \n", *npp);
printf("4 - Charge Up (%dPP) \n", *npp2);
}
else if(Np1 == 6)
{
printf("1 - Ice Beam (%d BP, %dPP) \n ", *attack, *nbp);
printf("2 - Scald (%d BP, %dPP) \n", *attack2, *nbp2);
printf("3 - Protect (%dPP) \n", *npp);
printf("4 - Charge Up (%dPP) \n", *npp2);
}
else if (Np1 == 7)
{
printf("1 - Water Gun (%d BP, %dPP) \n ", *attack, *nbp);
printf("2 - Earthquake (%d BP, %dPP) \n", *attack2, *nbp2);
printf("3 - Protect (%dPP) \n", *npp);
printf("4 - Charge Up (%dPP) \n", *npp2);
}
}
//damage calculator + action select for 
int damage(int nmove, int charge, int protect, int *pp, int *pp2, int *Nplayerhp, 
int *Nplayer2hp, int ncnt, int *attack, int *attack2, int *bp,int *bp2 , int 
protect2, int npick1, int npick2)
{
if(nmove == 4)
{
if(charge == 1)
{
printf("Charge is still active\n");
ncnt--;
}
else
{
if(*pp2 == 0)
{
printf("Not enough pp\n");
printf("Select other move\n");
ncnt--;
}
else
{
charge = 1;
*pp2 = *pp2 - 1;
*attack = *attack *2;
*attack2 = *attack *2; 
if(protect != 0)
{
protect = 0;
}
}
}
}
if(nmove == 3)
{
if(protect != 0)
{
printf("Protect is still active \n");
ncnt--;
}
else
{
if(*pp == 0)
{
printf("Not enough pp\n");
printf("Select other move\n");
ncnt--;
}
else
{
protect = 1;
*pp = *pp - 1;
}
}
}
if(nmove ==1)
{
if(*pp == 0)
{
if(*pp2 == 0)
{
if(protect2 == 1)
{
*Nplayerhp = *Nplayerhp - 5;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 10;
*Nplayerhp = *Nplayerhp - 5;
}
}
else
{
printf("Not enough pp\n");
printf("Select other move\n");
ncnt--;
}
}
else
{
if(npick1 == 1)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
protect2 = 0;
*bp = *bp - 1;
}
else
{
if(npick2 == 1 || npick2 == 2 || npick2 == 5 || 
npick2 ==7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
}
}
}
else
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
}
}
}
}
}
else if(npick1 == 2)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
protect2 = 0;
*bp = *bp - 1;
}
else
{
if( npick2 == 2 || npick2 == 6)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
}
}
}
else if(npick2 == 3 || npick2 == 4)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
}
}
}
else {
if(charge == 1)
{
if(protect2 == 1) {
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
}
}
}
}
}
else if(npick1 == 3)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp = *bp - 1;
}
else
{
if( npick2 == 2 || npick2 == 3)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
}
}
}
else if(npick2 == 5 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
}
}
}
else if(npick2 == 1 || npick2 == 4 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
}
}
}
else {
if(charge == 1)
{
if(protect2 == 1) {
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/4);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
}
}
}
}
}
else if(npick1 == 4)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack /2;
*attack2 = *attack2 /2;
charge = 0;
}
protect2 = 0;
*bp = *bp - 1;
}
else
{
if( npick2 == 3 || npick2 == 5 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack /2;
*attack2 = *attack2 /2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*bp = *bp - 1;
}
}
}
else if(npick2 == 1 || npick2 == 4 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
}
}
}
else {
if(charge == 1)
{
if(protect2 == 1) {
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack/2;
charge = 0;
}
}
else {
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
}
}
}
}
}
else if(npick1 == 5)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp = *bp - 1;
}
else
{
if( npick2 == 2 || npick2 == 3)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
}
}
}
else if(npick2 == 5 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
}
}
}
else if(npick2 == 1 || npick2 == 4 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
}
}
}
else {
if(charge == 1)
{
if(protect2 == 1) {
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/4);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/4);
*bp = *bp - 1;
}
}
}
}
}
else if(npick1 == 6)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp = *bp - 1;
}
else
{
if( npick2 == 1)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5/2);
*bp = *bp - 1;
}
}
}
else if(npick2 == 4 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5);
*bp = *bp - 1;
}
}
}
else if(npick2 == 2 || npick2 == 5 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*2);
*bp = *bp - 1;
}
}
}
else {
if(charge == 1)
{
if(protect2 == 1) {
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*4);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*1.5*4);
*bp = *bp - 1;
}
}
}
}
}
else if(npick1 == 7)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp = *bp - 1;
}
else
{
if( npick2 == 2 || npick2 == 6)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack/2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack/2);
*bp = *bp - 1;
}
}
}
else if(npick2 == 3 || npick2 == 4) {
if(charge == 1) {
if(protect2 == 1) {
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else {
if(protect2 == 1) {
*bp = *bp - 1;
protect2 =0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack);
*bp = *bp - 1;
}
}
}
else {
if(charge == 1)
{
if(protect2 == 1) {
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp = *bp - 1;
protect2 = 0;
}
else {
*Nplayer2hp = *Nplayer2hp - 
(*attack*2);
*bp = *bp - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp = *bp - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack*2);
*bp = *bp - 1;
}
}
}
}
}
}
}
if(nmove == 2)
{
if(*pp2 == 0)
{
if(*pp == 0)
{
if(protect2 == 1)
{
*Nplayerhp = *Nplayerhp - 5;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 10;
*Nplayerhp = *Nplayerhp - 5;
}
}
else
{
printf("Not enough pp\n");
printf("Select other move\n");
ncnt--;
}
}
else
{
if(npick1 == 1)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp2 = *bp2 - 1;
}
else
{
if( npick2 == 2 || npick2 == 3)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 5 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 1 || npick2 == 4 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*2);
*bp2 = *bp2 - 1;
}
}
}
else
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/4);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/4);
*bp2 = *bp2 - 1;
}
}
}
}
}
else if(npick1 == 2)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp2 = *bp2 - 1;
}
else
{
if( npick2 == 1)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 4 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 2 || npick2 == 5 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*2);
*bp2 = *bp2 - 1;
}
}
}
else
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*4);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*4);
*bp2 = *bp2 - 1;
}
}
}
}
}
else if(npick1 == 3)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp2 = *bp2 - 1;
}
else
{
if( npick2 == 4 || npick2 == 6 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 1 || npick2 == 3 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = * attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = * attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/2);
*bp2 = *bp2 - 1;
}
}
}
else 
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = * attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5*2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = * attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5*2);
*bp2 = *bp2 - 1;
}
}
}
}
}
else if(npick1 == 4)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp2 = *bp2 - 1;
}
else
{
if( npick2 == 2 || npick2 == 3)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 5 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 1 || npick2 == 4 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*2);
*bp2 = *bp2 - 1;
}
}
}
else
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/4);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
}
}
}
}
}
else if(npick1 == 5)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
protect2 = 0;
*bp2 = *bp2 - 1;
}
else
{
if(npick2 == 1 || npick2 == 2 || npick2 == 5 || 
npick2 ==7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2/2);
*bp2 = *bp2 - 1;
}
}
}
else
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2);
*bp2 = *bp2 - 1;
}
}
}
}
}
else if(npick1 == 6)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
protect2 = 0;
*bp2 = *bp2 - 1;
}
else
{
if( npick2 == 2 || npick2 == 6)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/2);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 3 || npick2 == 4)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2 /2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5);
*bp2 = *bp2 - 1;
}
}
}
else
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5*2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5*2);
*bp2 = *bp2 - 1;
}
}
}
}
}
else if(npick1 == 7)
{
if(protect2 == 1)
{
if(charge == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
protect2 = 0;
*bp2 = *bp2 - 1;
}
else
{
if( npick2 == 2 || npick2 == 3)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/2);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 5 )
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5);
*bp2 = *bp2 - 1;
}
}
}
else if(npick2 == 1 || npick2 == 4 || npick2 == 7)
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5*2);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5*2);
*bp2 = *bp2 - 1;
}
}
}
else
{
if(charge == 1)
{
if(protect2 == 1)
{
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
*bp2 = *bp2 - 1;
protect2 = 0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/4);
*bp2 = *bp2 - 1;
*attack = *attack/2;
*attack2 = *attack2/2;
charge = 0;
}
}
else
{
if(protect2 == 1)
{
*bp2 = *bp2 - 1;
protect2 =0;
}
else
{
*Nplayer2hp = *Nplayer2hp - 
(*attack2*1.5/4);
*bp2 = *bp2 - 1;
}
}
}
}
}
}
}
return *Nplayer2hp;
}
int main()
{
 int nplayer1 = 1;
 int nplayer2 = 2;
 int npick1;
 int npick2;
 int entei = 150;
 int milotic = 200;
 int tortera = 220;
 int pikachu = 120;
 int groudon = 150;
 int lapras = 190;
 int stunfish = 130;
 int entei2 = 150;
 int milotic2 = 200;
 int tortera2 = 220;
 int pikachu2 = 120;
 int groudon2 = 150;
 int lapras2 = 190;
 int stunfish2 = 130;
 int *Nplayerhp;
 int *Nplayer2hp;
 int ncnt = 1;
 int *bp;
 int *bp2;
 int *bp3;
 int *bp4;
 int npp = 5;
 int npp2 = 5;
 int npp3 = 5;
 int npp4 = 5;
 int fireblast = 30,earthquake = 30,icebeam = 20,scald = 20,dig = 20, leafstorm = 
40,thunderbolt = 10,fissure = 40,watergun = 10;
 int nbp = 5,nbp2 = 5, nbp3 = 7,nbp4 = 7, nbp5 = 10;
 int fireblast2 = 30,earthquake2 = 30,icebeam2 = 20,scald2 = 20,dig2 = 20, 
leafstorm2 = 40,thunderbolt2 = 10,fissure2 = 40,watergun2 = 10;
 int nbp6 = 5,nbp7 = 5, nbp8 = 7,nbp9 = 7, nbp0 = 10;
 int nmove;
 int nmove2;
 int protect = 0;
 int protect2 = 0;
 int charge = 0;
 int charge2 = 0;
 int *attack;
 int *attack2;
 int *attack3;
 int *attack4;
 int *pp;
 int *pp2;
 int *pp3;
 int *pp4;
//start of program
pokemon();
printf("Player %d turns to pick: ", nplayer1);
scanf("%d", &npick1);
while(npick1 < 1 || npick1 > 7)
{
printf("Please pick from 1-7: " );
scanf("%d", &npick1);
}
switch(npick1)
{
case 1: printf("Player %d picked Entei! \n", nplayer1 ); 
Nplayerhp = &entei;
bp = &nbp;
bp2 = &nbp2;
attack = &fireblast;
attack2 = &earthquake;
pp = &npp;
pp2 = &npp2;
break;
case 2: printf("Player %d picked Milotic \n", nplayer1);
Nplayerhp = &milotic;
bp = &nbp3;
bp2 = &nbp4;
attack = &scald;
attack2 = &icebeam;
pp = &npp;
pp2 = &npp2;
break;
case 3: printf("Player %d picked Tortera \n", nplayer1);
Nplayerhp = &tortera;
bp = &nbp3;
bp2 = &nbp;
attack = &dig;
attack2 = &leafstorm;
pp = &npp;
pp2 = &npp2;
break;
case 4: printf("Player %d picked Pikachu \n", nplayer1);
Nplayerhp = &pikachu;
bp = &nbp5;
bp2 = &nbp3;
attack = &thunderbolt;
attack2 = &dig;
pp = &npp;
pp2 = &npp2;
break;
case 5: printf("Player %d picked Groudon \n", nplayer1);
Nplayerhp = &groudon;
bp = &nbp;
bp2 = &nbp2;
attack = &fissure;
attack2 = &fireblast;
pp = &npp;
pp2 = &npp2;
break;
case 6: printf("Player %d picked Lapras \n", nplayer1);
Nplayerhp = &lapras;
bp = &nbp3;
bp2 = &nbp4;
attack = &icebeam;
attack2 = &scald;
pp = &npp;
pp2 = &npp2;
break;
case 7: printf("Player %d picked Stunfish \n", nplayer1);
Nplayerhp = &stunfish;
bp = &nbp5;
bp2 = &nbp;
attack = &watergun;
attack2 = &earthquake;
pp = &npp;
pp2 = &npp2;
break;
}
printf("\n");
printf("Player %d turns to pick: ", nplayer2);
scanf("%d", &npick2);
while(npick2 < 1 || npick2 > 7)
{
printf("Please pick from 1-7:");
scanf("%d", &npick2);
}
switch(npick2)
{
case 1: printf("Player %d picked Entei! \n", nplayer2 );
Nplayer2hp = &entei2;
bp3 = &nbp6;
bp4 = &nbp7;
attack3 = &fireblast2;
attack4 = &earthquake2;
pp3 = &npp3;
pp4 = &npp4; 
break;
case 2: printf("Player %d picked Milotic \n", nplayer2);
Nplayer2hp = &milotic2;
bp3 = &nbp8;
bp4 = &nbp9;
attack3 = &scald2;
attack4 = &icebeam2;
pp3 = &npp3;
pp4 = &npp4;
break;
case 3: printf("Player %d picked Tortera \n", nplayer2);
Nplayer2hp = &tortera2;
bp3 = &nbp8;
bp4 = &nbp6;
attack3 = &dig2;
attack4 = &leafstorm2;
pp3 = &npp3;
pp4 = &npp4;
break;
case 4: printf("Player %d picked Pikachu \n", nplayer2);
Nplayer2hp = &pikachu2;
bp3 = &nbp0;
bp4 = &nbp6;
attack3 = &thunderbolt2;
attack4 = &dig2;
pp3 = &npp3;
pp4 = &npp4;
break;
case 5: printf("Player %d picked Groudon \n", nplayer2);
Nplayer2hp = &groudon2;
bp3 = &nbp6;
bp4 = &nbp7;
attack3 = &fissure2;
attack4 = &fireblast2;
pp3 = &npp3;
pp4 = &npp4;
break;
case 6: printf("Player %d picked Lapras \n", nplayer2);
Nplayer2hp = &lapras2;
bp3 = &nbp8;
bp4 = &nbp9;
attack3 = &icebeam2;
attack4 = &scald2;
pp3 = &npp3;
pp4 = &npp4;
break;
case 7: printf("Player %d picked Stunfish \n", nplayer2);
Nplayer2hp = &stunfish2;
bp3 = &nbp0;
bp4 = &nbp6;
attack3 = &watergun2;
attack4 = &earthquake2;
pp3 = &npp3;
pp4 = &npp4;
break;
}
printf("\n");
while((*Nplayerhp > 0)&&(*Nplayer2hp > 0))
{
mark();
hpbars(npick1, Nplayerhp);
hpbars(npick2, Nplayer2hp);
if(ncnt%2 != 0)
{
moves(npick1, attack, attack2, bp, bp2, pp, pp2 );
printf("Player %d, select a move:",nplayer1);
scanf("%d", &nmove);
while(nmove < 1 || nmove > 4)
{
printf("Please pick from 1-4:");
scanf("%d", &nmove);
}
damage( nmove, charge, protect, pp,pp2, Nplayerhp, Nplayer2hp, ncnt, 
attack, attack2, bp,bp2 , protect2, npick1, npick2);
}
else
{
moves(npick2, attack3, attack4, bp3, bp4, pp3, pp4 );
printf("Player %d, select a move:",nplayer2);
scanf("%d", &nmove2);
while(nmove2 < 1 || nmove2 > 4)
{
printf("Please pick from 1-4:");
scanf("%d", &nmove2);
}
damage( nmove2, charge2, protect2, pp3,pp4, Nplayer2hp, Nplayerhp, ncnt, 
attack3, attack4, bp3,bp4 , protect, npick2, npick1);
}
ncnt++;
}
mark();
if(*Nplayerhp != 0)
{
printf("The Pokemon of player 2 has 0 Hp! \n");
printf("Player 1 wins! \n");
}
else
{
printf("The Pokemon of player 1 has 0 Hp! \n");
printf("Player 2 wins!");
}
mark();
//end
return 0;
}

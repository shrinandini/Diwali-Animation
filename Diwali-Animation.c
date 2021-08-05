#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
int main()
{
int gd,gm;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"");
setcolor(WHITE);
/*line for borders*/
line(0,0,0,479);
line(639,0,639,479);
line(0,0,639,0);
line(0,479,639,479);

/*center line */
line(639/2,0,639/2,479);
line(0,380,639,380);

/*house*/
rectangle(120,260,310,380);
line(120,260,155,200);/*triangle line/   */
line(155,200,185,260);/*triangle line \  */
line(280,200,310,260);/*triangle line \   */
line(155,200,280,200);/*triangle line -  */
line(185,260,185,380);
rectangle(137,310,167,380);/*rectangle for door*/
rectangle(210,280,280,330);/*rectangle for window*/

//lamp
line(120,260,85,260);
line(85,260,85,275);
line(72,275,98,275);
line(72,295,98,295);
line(68,285,72,275);
line(68,285,72,295);
line(102,285,98,275);
line(102,285,98,295);
line(72,295,98,275);//cross1
line(72,275,98,295);//cross2
line(72,295,72,305);
line(78,295,78,305);
line(85,295,85,305);
line(91,295,91,305);
line(98,295,98,305);
//boy
circle(50,396,16);
rectangle(37,413,63,451);
line(44,451,44,471);//leg
line(56,451,56,471);//leg
line(37,423,27,443);//hand
line(63,423,73,443);//hand

//diya
arc(223,322,180,360,7);   //window
line(215,322,230,322);
putpixel(230,319,WHITE);
putpixel(230,318,WHITE);
putpixel(230,317,WHITE);
putpixel(230,320,WHITE);

arc(245,322,180,360,7);   //window
line(238,322,252,322);
putpixel(252,319,WHITE);
putpixel(252,318,WHITE);
putpixel(252,317,WHITE);
putpixel(252,320,WHITE);

arc(267,322,180,360,7);    //window
line(260,322,274,322);
putpixel(274,319,WHITE);
putpixel(274,318,WHITE);
putpixel(274,317,WHITE);
putpixel(274,320,WHITE);

arc(205,373,180,360,7);
line(198,373,212,373);
putpixel(212,371,WHITE);
putpixel(212,370,WHITE);
putpixel(212,369,WHITE);
putpixel(212,368,WHITE);

arc(235,373,180,360,7);
line(228,373,242,373);
putpixel(242,371,WHITE);
putpixel(242,370,WHITE);
putpixel(242,369,WHITE);
putpixel(242,368,WHITE);

arc(265,373,180,360,7);
line(258,373,272,373);
putpixel(272,371,WHITE);
putpixel(272,370,WHITE);
putpixel(272,369,WHITE);
putpixel(272,368,WHITE);

arc(295,373,180,360,7);
line(288,373,302,373);
putpixel(302,371,WHITE);
putpixel(302,370,WHITE);
putpixel(302,369,WHITE);
putpixel(302,368,WHITE);






/* part 2*/
/*buildings*/
rectangle(319,170,405,380); /* building 1*/
rectangle(570,230,639,380); /* building 2*/
rectangle(500,280,570,380); /* building 3*/


/*rectangles in building 1 */
rectangle(330,185,350,200); //left
rectangle(330,218,350,233);
rectangle(330,251,350,266);
rectangle(330,284,350,299);
rectangle(330,317,350,332);
rectangle(330,350,350,365);

rectangle(370,185,390,200); //right
rectangle(370,218,390,233);
rectangle(370,251,390,266);
rectangle(370,284,390,299);
rectangle(370,317,390,332);
rectangle(370,350,390,365);

/*rectangles in building 2*/
rectangle(580,245,595,256); //left
rectangle(580,271,595,282);
rectangle(580,297,595,308);
rectangle(580,323,595,334);
rectangle(580,349,595,360);


rectangle(610,245,625,255); //right
rectangle(610,271,625,282);
rectangle(610,297,625,308);
rectangle(610,323,625,334);
rectangle(610,349,625,360);

/*rectangles in building 3*/
rectangle(513,290,528,300); //left
rectangle(513,312,528,322);
rectangle(513,334,528,344);
rectangle(513,356,528,366);

rectangle(543,290,558,300); //right
rectangle(543,312,558,322);
rectangle(543,334,558,344);
rectangle(543,356,558,366);

//boy1
circle(395,396,16);
rectangle(382,413,408,451);
line(389,451,389,471);    //leg
line(401,451,401,471);    //leg
line(382,423,367,440);    //hand
line(408,423,418,443);    //hand
line(367,440,350,420);
putpixel(347,415,WHITE);
line(347,419,345,429);
line(345,419,338,426);
line(344,417,337,419);
line(344,414,337,412);
line(346,412,341,406);
line(349,413,352,405);
line(350,416,357,413);

//firecracker
line(450,430,442,440);
line(450,430,458,440);
line(442,440,458,440);

line(450,430,450,300);     //center
putpixel(450,293,WHITE);

line(450,430,460,320);//left
putpixel(460,313,WHITE);
line(450,430,468,340);
putpixel(469,333,WHITE);
line(450,430,473,360);
putpixel(475,353,WHITE);
line(450,430,478,380);
putpixel(480,373,WHITE);
line(450,430,474,400);
putpixel(477,393,WHITE);

line(450,430,440,320);//right
putpixel(439,313,WHITE);
line(450,430,432,340);
putpixel(430,333,WHITE);
line(450,430,427,360);
putpixel(426,353,WHITE);
line(450,430,422,380);
putpixel(420,373,WHITE);
line(450,430,426,400);
putpixel(424,393,WHITE);



return 0;

getch();
}

#include<stdio.h>
#include<math.h>

#define N1 ai = i%10; bi = (i/10)%10; ci = (i/100)%10; di = (i/1000)%10; ei = (i/10000)%10


#define N2 aj = j%10; bj = (j/10)%10; cj = (j/100)%10; dj = (j/1000)%10; ej = (j/10000)%10

int main()
{
                int i, j, n, ai, bi, ci, di , ei, aj, bj, cj , dj, ej, k;
                printf("enter a number:");
                while(scanf("%d", &n)==1)
                {

                if(n==0)
                break;
                if(n<=51)
                {
                  if(n==2)
                {printf("13458 / 06729 = 2\n13584 / 06792 = 2\n13854 / 06927 = 2\n14538 / 07269 = 2\n14586 / 07293 = 2\n14658 / 07329 = 2\n15384 / 07692 = 2");
printf("\n15846 / 07923 = 2\n15864 / 07932 = 2\n18534 / 09267 = 2\n18546 / 09273 = 2\n18654 / 09327 = 2\n26970 / 13485 = 2\n27096 / 13548 = 2\n27690 / 13845 = 2");
printf("\n29076 / 14538 = 2\n29370 / 14685 = 2\n29670 / 14835 = 2\n29706 / 14853 = 2\n29730 / 14865 = 2\n30972 / 15486 = 2\n32970 / 16485 = 2\n37092 / 18546 = 2\n37290 / 18645 = 2");
printf("\n41358 / 20679 = 2\n41538 / 20769 = 2\n41586 / 20793 = 2\n46158 / 23079 = 2\n53418 / 26709 = 2\n53814 / 26907 = 2\n54138 / 27069 = 2\n54186 / 27093 = 2");
printf("\n54618 / 27309 = 2\n58134 / 29067 = 2\n58146 / 29073 = 2\n58614 / 29307 = 2\n61458 / 30729 = 2\n61584 / 30792 = 2\n61854 / 30927 = 2\n62970 / 31485 = 2");
printf("\n64158 / 32079 = 2\n65418 / 32709 = 2\n65814 / 32907 = 2\n69702 / 34851 = 2\n70296 / 35148 = 2\n70962 / 35481 = 2\n76290 / 38145 = 2\n76902 / 38451 = 2");
printf("\n90276 / 45138 = 2\n90372 / 45186 = 2\n90762 / 45381 = 2\n92370 / 46185 = 2\n93702 / 46851 = 2\n96270 / 48135 = 2\n96702 / 48351 = 2\n97026 / 48513 = 2\n97032 / 48516 = 2");
printf("\n97062 / 48531 = 2\n97230 / 48615 = 2\n97302 / 48651 = 2\n");
                }
                else
                if(n==3)
                printf("17469 / 05823 = 3\n17496 / 05832 = 3\n50382 / 16794 = 3\n53082 / 17694 = 3\n61749 / 20583 = 3\n69174 / 23058 = 3\n91746 / 30582 = 3\n96174 / 32058 = 3\n");
                else
                if(n==4)
                {
                printf("15768 / 03942 = 4\n17568 / 04392 = 4\n23184 / 05796 = 4\n31824 / 07956 = 4\n60948 / 15237 = 4\n68940 / 17235 = 4\n69408 / 17352 = 4\n81576 / 20394 = 4");
                printf("\n81756 / 20439 = 4\n86940 / 21735 = 4\n94068 / 23517 = 4\n94860 / 23715 = 4\n");
                }
                else
                if(n==5)
                {
                printf("13485 / 02697 = 5\n13845 / 02769 = 5\n14685 / 02937 = 5\n14835 / 02967 = 5\n14865 / 02973 = 5\n16485 / 03297 = 5\n18645 / 03729 = 5\n31485 / 06297 = 5");
                printf("\n38145 / 07629 = 5\n46185 / 09237 = 5\n48135 / 09627 = 5\n48615 / 09723 = 5\n67290 / 13458 = 5\n67920 / 13584 = 5\n69270 / 13854 = 5\n72690 / 14538 = 5\n72930 / 14586 = 5");
                printf("\n73290 / 14658 = 5\n76920 / 15384 = 5\n79230 / 15846 = 5\n79320 / 15864 = 5\n92670 / 18534 = 5\n92730 / 18546 = 5\n93270 / 18654 = 5\n");
                }
                else
                if(n==6)
                printf("17658 / 02943 = 6\n27918 / 04653 = 6\n34182 / 05697 = 6\n");
                else
                if(n==7)
                printf("16758 / 02394 = 7\n18459 / 02637 = 7\n31689 / 04527 = 7\n36918 / 05274 = 7\n37926 / 05418 = 7\n41832 / 05976 = 7\n53298 / 07614 = 7\n98532 / 14076 = 7\n");
                if(n==8)
                {printf("25496 / 03187 = 8\n36712 / 04589 = 8\n36728 / 04591 = 8\n37512 / 04689 = 8\n37528 / 04691 = 8\n38152 / 04769 = 8\n41896 / 05237 = 8\n42968 / 05371 = 8\n46312 / 05789 = 8\n46328 / 05791 = 8\n46712 / 05839 = 8");
printf("\n47136 / 05892 = 8\n47328 / 05916 = 8\n47368 / 05921 = 8\n51832 / 06479 = 8\n53928 / 06741 = 8\n54312 / 06789 = 8\n54328 / 06791 = 8\n54712 / 06839 = 8\n56984 / 07123 = 8\n58496 / 07312 = 8\n58912 / 07364 = 8");
printf("\n59328 / 07416 = 8\n59368 / 07421 = 8\n63152 / 07894 = 8\n63528 / 07941 = 8\n65392 / 08174 = 8\n65432 / 08179 = 8\n67152 / 08394 = 8\n67352 / 08419 = 8\n67512 / 08439 = 8\n71456 / 08932 = 8");
printf("\n71536 / 08942 = 8\n71624 / 08953 = 8\n71632 / 08954 = 8\n73248 / 09156 = 8\n73264 / 09158 = 8\n73456 / 09182 = 8\n74528 / 09316 = 8\n74568 / 09321 = 8\n74816 / 09352 = 8\n75328 / 09416 = 8\n75368 / 09421 = 8");
printf("\n76184 / 09523 = 8\n76248 / 09531 = 8\n76328 / 09541 = 8\n83672 / 10459 = 8\n83752 / 10469 = 8\n84296 / 10537 = 8\n84632 / 10579 = 8\n84736 / 10592 = 8\n85392 / 10674 = 8\n85432 / 10679 = 8\n85936 / 10742 = 8");
printf("\n86352 / 10794 = 8\n87456 / 10932 = 8\n87536 / 10942 = 8\n87624 / 10953 = 8\n87632 / 10954 = 8\n96584 / 12073 = 8\n98456 / 12307 = 8\n98760 / 12345 = 8\n");
                }
                else
                if(n==9)
                printf("57429 / 06381 = 9\n58239 / 06471 = 9\n75249 / 08361 = 9\n95742 / 10638 = 9\n95823 / 10647 = 9\n97524 / 10836 = 9\n");
                else
                if(n==10) printf("There are no solutions for 10.\n");
                else
                if(n==11)
                printf("There are no solutions for 11.\n");
                else
                if(n==12)
                printf("45792 / 03816 = 12\n73548 / 06129 = 12\n89532 / 07461 = 12\n91584 / 07632 = 12\n");
                else
                if(n==13)
                printf("67392 / 05184 = 13\n81549 / 06273 = 13\n94653 / 07281 = 13\n");
                else
                if(n==14)
                printf("25746 / 01839 = 14\n27384 / 01956 = 14\n41538 / 02967 = 14\n46158 / 03297 = 14\n51492 / 03678 = 14\n54768 / 03912 = 14\n61572 / 04398 = 14\n65982 / 04713 = 14\n");
                else
                if(n==15)
                printf("27945 / 01863 = 15\n92745 / 06183 = 15\n");
                else
                if(n==16)
                printf("45936 / 02871 = 16\n73296 / 04581 = 16\n98352 / 06147 = 16\n");
                else
                if(n==17)
                {
                printf("26843 / 01579 = 17\n28543 / 01679 = 17\n29546 / 01738 = 17\n36958 / 02174 = 17\n45713 / 02689 = 17\n45781 / 02693 = 17\n54689 / 03217 = 17\n59126 / 03478 = 17\n");
printf("64957 / 03821 = 17\n65297 / 03841 = 17\n67184 / 03952 = 17\n67218 / 03954 = 17\n76823 / 04519 = 17\n76891 / 04523 = 17\n78132 / 04596 = 17\n78523 / 04619 = 17\n78591 / 04623 = 17\n81532 / 04796 = 17\n83572 / 04916 = 17\n");
printf("83657 / 04921 = 17\n89437 / 05261 = 17\n89471 / 05263 = 17\n89641 / 05273 = 17\n91426 / 05378 = 17\n92837 / 05461 = 17\n92871 / 05463 = 17\n93126 / 05478 = 17\n");
                }
                else
                if(n==18)
                printf("28674 / 01593 = 18\n");
                else
                if(n==19)
                printf("51984 / 02736 = 19\n81567 / 04293 = 19\n");
                else
                if(n==20)
                printf("There are no solutions for 20.\n");
                else
                if(n==21)
                printf("There are no solutions for 21.\n");
                else
                if(n==22)
                printf("51678 / 02349 = 22\n");
                else
                if(n==23)
                printf("36294 / 01578 = 23\n81627 / 03549 = 23\n81972 / 03564 = 23\n");
                else
                if(n==24)
                printf("39528 / 01647 = 24\n46872 / 01953 = 24\n");
                else
                if(n==25)
                printf("There are no solutions for 25.\n");
                else
                if(n==26)
                printf("42978 / 01653 = 26\n56498 / 02173 = 26\n61854 / 02379 = 26\n67314 / 02589 = 26\n67418 / 02593 = 26\n76518 / 02943 = 26\n82654 / 03179 = 26\n89726 / 03451 = 26\n92846 / 03571 = 26\n");
                else
                if(n==27)
                printf("39852 / 01476 = 27\n49572 / 01836 = 27\n96714 / 03582 = 27\n");
                else
                if(n==28)
                printf("75348 / 02691 = 28\n");
                else
                if(n==29)
                printf("37584 / 01296 = 29\n73689 / 02541 = 29\n");
                else
                if(n==30)
                printf("There are no solutions for 30.\n");
                else
                if(n==31)
                printf("There are no solutions for 31.\n");
                else
                if(n==32)
                printf("75168 / 02349 = 32\n");
                else
                if(n==33)
                printf("There are no solutions for 33.\n");
                else
                if(n==34)
                printf("There are no solutions for 34.\n");
                else
                if(n==35)
                printf("48265 / 01379 = 35\n63945 / 01827 = 35\n64295 / 01837 = 35\n74865 / 02139 = 35\n93485 / 02671 = 35\n");
                else
                if(n==36)
                printf("There are no solutions for 36.\n");
                else
                if(n==37)
                printf("65934 / 01782 = 37\n");
                else
                if(n==38)
                printf("65892 / 01734 = 38\n74328 / 01956 = 38\n");
                else
                if(n==39)
                printf("There are no solutions for 39\n");
                else
                if(n==40)
                printf("Ther are no solutions for 40.\n");
                else
                if(n==41)
                printf("There are no solutions for 41.\n");
                else
                if(n==42)
                printf("There are no solutions for 42\n");
                else
                if(n==43)
                printf("93654 / 02178 = 43\n");
                else
                if(n==44)
                printf("58476 / 01329 = 44\n59268 / 01347 = 44\69432 / 01578 = 44\n95348 / 02167 = 44\n");
                else
                if(n==45)
                printf("There are no solutions for 45.\n");
                else
                if(n==46)
                printf("58374 / 01269 = 46\n");
                if(n>=47 && n<=51)
                printf("There are no solutions for %d.\n", n);
                }
                else
                if(n>51 && n <69)
                {
                for(i=1234, k=0; i<=98765; i++)
                {
                N1;
                if(ai != bi && ai != ci && ai != di && ai != ei)
                {
                if(bi != ci && bi != di && bi != ei)
                {
                if(ci != di && ci != ei)
                {
                if(di != ei)
                for(j=1234; j<=98765; j++)
                {
                N2;
                if(aj != ai && aj != bi && aj != ci && aj != di && aj != ei)
                {
                if(bj != ai && bj != bi && bj != ci && bj != di && bj != ei)
                {
                if(cj != ai && cj != bi && cj != ci && cj != di && cj != ei)
                {
                if(dj != ai && dj != bi && dj != ci && dj != di && dj != ei)
                {
                if(ej != ai && ej != bi && ej != ci && ej != di && ej != ei)
                {
                if(aj != bj && aj != cj && aj != dj && aj != ej)
                {
                if(bj != cj && bj != dj && bj != ej)
                {
                if(cj != dj && cj != ej)
                {
                if(dj != ej)
                {
                if(n == (float)j/i)
                {
                printf("%d / %05d = %d\n", j, i, n);
                k++;
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                }
                if(98765/i < n)
                break;
                }
                if(k==0)
                printf("There are no solutions for %d.\n", n);
                }
                else
                printf("There are no solutions for %d.\n", n);

                }
                return 0;


}



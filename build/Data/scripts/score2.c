#import "data/scripts/levelup/lvup.c"
void main()
{
	int puntos =  getplayerproperty(1,"score");
	int resta = puntos - getglobalvar("punt_ant_2P");
	//changeplayerproperty(1, "score", puntos+((openborvariant("count_players")-1)*resta));
	setglobalvar("punt_ant_2P", getplayerproperty(1,"score"));
	changeLv(1);
}

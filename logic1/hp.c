hp()
{

	web_add_header("Origin", 
		"http://localhost");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
//	web_reg_save_param_regexp(
//		"ParamName=tokenkey",
//		"RegExp=common/logout&amp;token=(.*?)\">",
//		"Ordinal=1",
//		SEARCH_FILTERS,
//		LAST);
	
	lr_rendezvous("hp_rend");

		
	web_reg_save_param_ex(
		"ParamName=tokenkey",
		"LB=common/logout&amp;token=",
		"RB=\">",
		"Ordinal=1",
		SEARCH_FILTERS,
		LAST);
	

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Dashboard",
		LAST);

	web_submit_data("index.php", 
		"Action=http://localhost/logic/admin/index.php?load=common/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=admin", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=redirect", "Value=", ENDITEM, 
		LAST);

	return 0;
}

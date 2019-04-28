create_cus()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_url("index.php_7", 
		"URL=http://localhost/logic/admin/index.php?load=billing/customer/form&token={tokenkey}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/customer&token={tokenkey}", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://localhost");

	web_submit_form("index.php_8", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=firstname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=lastname", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=company", "Value=jspiders{usr_id}", ENDITEM, 
		"Name=website", "Value=jspiders{usr_id}.com", ENDITEM, 
		"Name=email", "Value=jspiders{usr_id}@jspiders{usr_id}.com", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=confirm", "Value=123456", ENDITEM, 
		"Name=status", "Value=Enabled", ENDITEM, 
		LAST);

	return 0;
}

check_inv()
{
lr_start_transaction("check_in");

		
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(12);
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"SaveCount=inv_count",
		"Text=jspiders{usr_id}",
		LAST);

	web_url("index.php_2", 
		"URL=http://localhost/logic/admin/index.php?load=billing/invoice&token={tokenkey}&filter_name=jspiders{usr_id}%20jspiders{usr_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/logic/admin/index.php?load=billing/invoice&token={tokenkey}", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_eval_string("{inv_count}");

	if(atoi(lr_eval_string("{inv_count}"))>=26){
		lr_end_transaction("check_in", LR_PASS);
		lr_output_message("%d is the count so passed", atoi(lr_eval_string("{inv_count}")));	
	}
	else{
		lr_end_transaction("check_in", LR_FAIL);
		lr_error_message("%d is the count so failed", atoi(lr_eval_string("{inv_count}")));
	
	}

	return 0;
}
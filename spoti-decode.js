//codi que potser descodifica mp3 en format string

for(var BASE64_DIGITS="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",STRING_CHUNK_SIZE=4096,inverseDigits=[],i=0;i<256;++i)inverseDigits[i]=255;for(var i=0;i<BASE64_DIGITS.length;++i)inverseDigits[BASE64_DIGITS.charCodeAt(i)]=i;

var inverseData=String.fromCharCode.apply(String,inverseDigits),

_stringFromCharCode=function(data){
  if(data.length<STRING_CHUNK_SIZE)return String.fromCharCode.apply(String,data);
  var ptr=0,result=[];
  do 
    result.push(String.fromCharCode.apply(String,data.slice(ptr,ptr+STRING_CHUNK_SIZE))),
    ptr+=STRING_CHUNK_SIZE;
  while(ptr<data.length);
  
  return result.join("")
}

function encode(str){
	var out,i,len,c1,c2,c3;
	for(len=str.length,i=0,out="";i<len;){
		if(c1=255&str.charCodeAt(i++),i==len){
      out+=BASE64_DIGITS.charAt(c1>>2),
      out+=BASE64_DIGITS.charAt((3&c1)<<4),
      out+="==";
      break
    }
    if(c2=str.charCodeAt(i++),i==len){
      out+=BASE64_DIGITS.charAt(c1>>2),
      out+=BASE64_DIGITS.charAt((3&c1)<<4|(240&c2)>>4),
      out+=BASE64_DIGITS.charAt((15&c2)<<2),
      out+="=";
      break
    }
    c3=str.charCodeAt(i++),
    out+=BASE64_DIGITS.charAt(c1>>2),
    out+=BASE64_DIGITS.charAt((3&c1)<<4|(240&c2)>>4),
    out+=BASE64_DIGITS.charAt((15&c2)<<2|(192&c3)>>6),
    out+=BASE64_DIGITS.charAt(63&c3)
	}
	return out
}

function decode(str){
	for(var tmp0,tmp1,ret=[],len=str.length,j=0;;) {
		do 
			tmp0=inverseData.charCodeAt(255&str.charCodeAt(j++));
		while(255===tmp0&&j<len);
		
		do 
			tmp1=inverseData.charCodeAt(255&str.charCodeAt(j++));
		while(255===tmp1&&j<len);
		
		if(255===tmp1)break;
		
		ret.push(255&(tmp0<<2|tmp1>>4));
		
		do 
			tmp0=inverseData.charCodeAt(255&str.charCodeAt(j++));
		while(255===tmp0&&j<len);
		
		if(255===tmp0)break;
		
		ret.push(255&(tmp1<<4|tmp0>>2));
		
		do 
			tmp1=inverseData.charCodeAt(255&str.charCodeAt(j++));
		while(255===tmp1&&j<len);
		
		if(255===tmp1)break;
		
		ret.push(255&(tmp0<<6|tmp1))
	}
	return _stringFromCharCode(ret)
}

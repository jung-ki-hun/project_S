###############################################################

작성자     : 자바를 알고 있는 사람
작성년월일 : 나이 먹어가는 어느 날
버     전  : 업 그레이드 않할건데 알면 뭐해

###############################################################

구성 :
    Writer Dir : 풀을 만들기 위한 정보를 만드는 클래스들이 있음
       |
       +-------- PoolProperties.class : 실행 클래스
       +-------- SAXParser.class      : SAX 방식을 이용한 xml 파서
       +-------- XmlMaker.class       : DOM 방식을 이용해서 xml 문서를 만듬
       +--------- etc                 : 기타 등등의 핸들러 클래스

    Reader Dir : 만들어진 xml 문서로 부터 풀을 만드는데 필요한 정보를 읽어오는 클래스들
       |
       +-------- DBPoolManager.class       : 커넥션을 만드는 클래스
       +-------- SAXParser.class           : xml 문서에서 테이타 베이스 별로 풀을 만들기 위해 필요한 정보를 파싱하는 클래스
       +-------- PoolPropertyManager.class : 파싱된 결과 중 원하는 특정 테이타 베이스에 대한 정보를 반환해 주는 클래스
       |
       +------- Sample Dir
                  |
		  +--------- Login.class     : DBPoolManager 로 부터 connection을 반환 받아온다
		  +--------- Stock.jsp       : Login 과 동일
		  +--------- createStock.sql : 사용할 테이블 생성 
		  +--------- xml.jar         : xml parser를 사용함으로 클래스 패스에 추가, 절대 jre/lib/ext 에 놓지 말것
 실행
   생성된 pool.xml 을 PoolPropertiyManager 에서 읽을 수 있는 위치에 같다 놓으면 돼요
               
       
                  
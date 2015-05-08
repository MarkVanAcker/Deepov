#include "catch.hpp"
#include "FastBoard.hpp"
#include "MagicMoves.hpp"

TEST_CASE( "Rook moves", "[rook]" )
{
	initmagicmoves();

	SECTION("Test pseudo-legal moves")
	{
		FastBoard board("1bq1b2p/p2p1pp1/2Bk4/1N6/4r1Q1/B6P/PP1PPPPR/3K2R1 b K -");
		int whiteSize = board.getRookPseudoLegalMoves(WHITE).size();
		int blackSize = board.getRookPseudoLegalMoves(BLACK).size();
		REQUIRE(whiteSize == 4);
		REQUIRE(blackSize == 11);
	}
}
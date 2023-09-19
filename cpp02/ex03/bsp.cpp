/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:37:26 by dcastagn          #+#    #+#             */
/*   Updated: 2023/09/15 16:18:35 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// bool	bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	Point	A(a), B(b), C(c), p(point);
// 	Fixed	i = 0;

// 	A.angularCoefficient(B);
// 	A.inter();
// 	B.angularCoefficient(C);
// 	B.inter();
// 	C.angularCoefficient(A);
// 	C.inter();
// }

// Fixed CalcTriArea(Point const a, Point const b, Point const c) {
//   Fixed det;
//   det = ((a.getX() - c.getX()) * (b.getY() - c.getY())) - ((b.getX() - c.getX()) * (a.getY() - c.getY()));
//   return (det / 2.0f);
// }

// bool bsp(Point const a, Point const b, Point const c, Point const pt) {
//   Fixed TotalArea = CalcTriArea(a, b, c);
//   Fixed Area1 = CalcTriArea(pt, b, c);
//   Fixed Area2 = CalcTriArea(pt, a, c);
//   Fixed Area3 = CalcTriArea(pt, a, b);
//   std::cout << "Area1 = " << Area1 << std::endl;
//   std::cout << "Area2 = " << Area2 << std::endl;
//   std::cout << "Area3 = " << Area3 << std::endl;
//   std::cout << "AreaTot = " << TotalArea << std::endl;

//   if(TotalArea - (Area1 + Area2 + Area3) > 0.15f)
//     return false;
//   else
//     return true;
// }


/* IsPointInTri() - 
 * Used by IsPointInQuad(). Function takes the point and the triangle's 
 * vertices. It finds the area of the passed triangle (v1 v2 v3), and then the
 * areas of the three triangles (pt v2 v3), (pt v1 v3), and (pt v1 v2). If the
 * sum of these three is greater than the first, then the point is outside of
 * the triangle.
 */

// bool IsPointInTri(const fPoint *pt, const fPoint *v1, const fPoint *v2, const fPoint *v3)
// {
//   float TotalArea = CalcTriArea(v1, v2, v3);
//   float Area1 = CalcTriArea(pt, v2, v3);
//   float Area2 = CalcTriArea(pt, v1, v3);
//   float Area3 = CalcTriArea(pt, v1, v2);

//   if((Area1 + Area2 + Area3) > TotalArea)
//     return false;
//   else
//     return true;
// }

/* CalcTriArea() - 
 * Find the area of a triangle. This function uses the 1/2 determinant
 * method. Given three points (x1, y1), (x2, y2), (x3, y3):
 *             | x1 y1 1 |
 * Area = .5 * | x2 y2 1 |
 *             | x3 y3 1 |
 * From: http://mcraefamily.com/MathHelp/GeometryTriangleAreaDeterminant.htm
 */
// float CalcTriArea(fPoint *v1, fPoint *v2, fPoint *v3)
// {
//   float det = 0.0f;
//   det = ((v1->x - v3->x) * (v2->y - v3->y)) - ((v2->x - v3->x) * (v1->y - v3->y));
//   return (det / 2.0f);
// }

Fixed sign (Point const a, Point const b, Point const c)
{
    return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const pt)
{
    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(pt, a, b);
    d2 = sign(pt, b, c);
    d3 = sign(pt, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
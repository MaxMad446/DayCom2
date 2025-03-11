package main

// Auto-generated | 2026-05-12T04:02:10.437091
import "fmt"

func Process_754() int {
    base := 282
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}

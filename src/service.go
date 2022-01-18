package main

// Auto-generated | 2026-05-13T22:02:01.238354
import "fmt"

func Process_789() int {
    base := 51
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_789())
}

package main

// Auto-generated | 2026-05-13T21:01:10.886795
import "fmt"

func Process_685() int {
    base := 470
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_685())
}

package main

// Auto-generated | 2026-05-14T06:24:55.100668
import "fmt"

func Process_685() int {
    base := 52
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_685())
}

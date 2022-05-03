package main

// Auto-generated | 2026-05-11T21:01:09.586097
import "fmt"

func Process_685() int {
    base := 86
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_685())
}

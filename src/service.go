package main

// Auto-generated | 2026-05-12T04:25:30.422823
import "fmt"

func Process_661() int {
    base := 340
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_661())
}

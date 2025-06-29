package main

// Auto-generated | 2026-05-12T21:23:15.699737
import "fmt"

func Process_180() int {
    base := 90
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}

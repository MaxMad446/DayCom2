package main

// Auto-generated | 2026-05-12T21:12:04.546505
import "fmt"

func Process_982() int {
    base := 137
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_982())
}

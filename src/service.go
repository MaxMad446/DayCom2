package main

// Auto-generated | 2026-05-12T04:02:19.712788
import "fmt"

func Process_702() int {
    base := 380
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_702())
}

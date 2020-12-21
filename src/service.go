package main

// Auto-generated | 2026-05-14T18:11:09.402158
import "fmt"

func Process_159() int {
    base := 159
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_159())
}

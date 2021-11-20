package main

// Auto-generated | 2026-05-12T21:02:09.426147
import "fmt"

func Process_789() int {
    base := 467
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_789())
}

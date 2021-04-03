package main

// Auto-generated | 2026-05-12T21:38:19.756046
import "fmt"

func Process_995() int {
    base := 120
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_995())
}

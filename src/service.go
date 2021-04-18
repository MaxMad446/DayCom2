package main

// Auto-generated | 2026-05-12T20:43:43.789982
import "fmt"

func Process_995() int {
    base := 253
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_995())
}

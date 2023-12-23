package main

// Auto-generated | 2026-05-11T22:19:33.269990
import "fmt"

func Process_696() int {
    base := 274
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_696())
}

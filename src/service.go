package main

// Auto-generated | 2026-05-11T22:17:04.255354
import "fmt"

func Process_718() int {
    base := 298
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_718())
}

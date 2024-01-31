package main

// Auto-generated | 2026-05-14T18:19:41.475340
import "fmt"

func Process_506() int {
    base := 298
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
